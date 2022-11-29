#include <iostream>

class Document{
    std::string m_title;
    std::string m_author;
    std::string m_text;
    public:
    Document(std::string title, std::string author, std::string text){
        m_title = title;
        m_author = author;
        m_text = text;
    }
    void print(){
        std::cout << m_title << std::endl;
        std::cout << m_author << std::endl;
        std::cout << m_text << std::endl;
    }
};
//create builder for document class
class DocumentBuilder{
    std::string m_title;
    std::string m_author;
    std::string m_text;
    public:
    DocumentBuilder& setTitle(std::string title){
        m_title = title;
        return *this;
    }
    DocumentBuilder& setAuthor(std::string author){
        m_author = author;
        return *this;
    }
    DocumentBuilder& setText(std::string text){
        m_text = text;
        return *this;
    }
    Document build(){
        return Document(m_title, m_author, m_text);
    }
};


int main () {
    DocumentBuilder builder;
    Document document = builder.setTitle("Title").setAuthor("Author").setText("Text").build();
    document.print();
    Document document2 = builder.setTitle("hehe").setAuthor("haha").setText("hoho").build();
    document2.print();

    return 0;
}