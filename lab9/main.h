#ifndef MAIN_HPP
#define MAIN_HPP
#include <string>

class Text {
public:
    std::string content;
    std::string topic;
    Text(const std::string& content, const std::string& topic): content{ content }, topic{ topic } {}
    int countLetters() const;
    int countSpaces() const;
    bool replaceLetter(char oldLetter, char newLetter);
    bool removeWord(int wordNumber);
};
#endif
