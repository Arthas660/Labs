#include <iostream>
#include "main.hpp"

bool isLetter(char el) {return (el >= 'A' && el <= 'Z') || (el >= 'a' && el <= 'z');}

int Text::countLetters() const {
    int count = 0;

    for (char el : content) {
        if (isLetter(el)) {
            count++;
        }
    }
    return count;
}

int Text::countSpaces() const {
    int count = 0;

    for (char el : content) {
        if (el == ' ') {
            count++;
        }
    }
    return count;
}

bool Text::replaceLetter(char oldLetter, char newLetter) {
    if (!isLetter(oldLetter) || !isLetter(newLetter)) {
        return false;
    }

    for (char& el : content) {
        if (el == oldLetter) {
            el = newLetter;
        }
    }
    return true;
}

bool Text::removeWord(int n) {
    if (n <= 0 || content.empty()) {
        return false;
    }

    std::string::size_type start{0};
    for (int i = 1; i < n; i++) {
        while (start < content.length() && content[start] != ' ') {
            start++;
        }
        if (start == content.length()) {
            return false;
        }
        start++;
    }
    std::string::size_type end = start;

    while (end < content.length() && content[end] != ' ') {
        end++;
    }

    if (start == 0) {
        if (end == content.length()) {
            content.clear();
        }
        else {
            content.erase(0, end + 1);
        }
    }
    else {
        content.erase(start - 1, end - start + 1);
    }
    return true;
}

int main() {
    Text example("Hello beautiful world", "Greeting");
    std::cout << "Content: " << example.content << '\n';
    std::cout << "Topic: " << example.topic << '\n';
    std::cout << "Letters: " << example.countLetters() << '\n';
    std::cout << "Spaces: " << example.countSpaces() << '\n';
    example.replaceLetter('o', 'G');
    std::cout << "After replacement: " << example.content << '\n';
    example.removeWord(2);
    std::cout << "After deleting word: " << example.content << '\n';

    return 0;
}
