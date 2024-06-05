#include <iostream> //потоки ввода/вывода
#include <string.h> // std::string
#include <set>
#include <utility>
#include <vector>
#include <map>
#include <fstream>
#include <filesystem>
#include <locale>
#include <codecvt>
#include <Windows.h>
#include <singleton.h>


using namespace std;

std::vector<std::string> SplitIntoWords(const std::string& text)
{
    std::vector<std::string> words;
    std::string word;
    for (const char& c : text)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }

    return words;
}

class User
        {
public:
    virtual void Registration () = 0;
    virtual void Check_pass()= 0;
    virtual void Check_login()= 0;
    virtual void Encryption()= 0;
  };

class Singleton
{
private:
    static Singleton* _instance;
    Singleton();

public:
    static Singleton* GetInstance()
    {
        if(this->_instance == null){ this->Singleton(); }
        return this->_instance;
    }
}
        Singleton* instance = nullptr; // Вот тут может быть не корректно
class Test : public User
        {
public:

    Test () = default;
    Test (string name_test_, string name_file_test_question_, string  name_file_test_answer_, string category_):
        name_test (name_test_),
        name_file_test_question (name_file_test_question_),
        name_file_test_answer(name_file_test_answer_),
        category(category_)
    {}
    string Display_Questions()
    {
       return  name_file_test_question;
    };
    void Add_Question(string question)
    {
        std::string mass;
        std::ifstream file1(name_file_test_question); //file_input -название файла из которого считываем
        if (file1.is_open()) //открыли файл name_file_test_question_
        {
            std::string line;
            while (std::getline(file1 >> std::ws, line))
            {
                mass.push_back(SplitIntoWords(line));
            }
            file1.close();//ОБЯЗАТЕЛЬНО ЗАКРЫТЬ файл
        }
    };

    int Check_answer(vector<int> answer, string name)
    {
        if (name_file_test_answer==right_answer)
        {
            name_statistics_test==right_answer;
        }
    };
    void Delete_Questions(string question)
    {
         Questions="";
    };
    string Get_Category()
    {
        return category;
    };
    string Get_Name_Test()
    {
        return name_test;
    };

private:
    string name_test;
    string name_file_test_question;
    string name_file_test_answer;
    string category;
    string name_statistics_test;
    string right_answer;
    string Questions;
};

    class Admim : public User{
public:
        Admim() = default;
    Admim(string name_, string login_, string pass_):
    name(name_),
    login(login_),
    pass(pass_)
    {};

    void Registration (string name_)
    {
        name_ = name;
    };

    void Delete_Test(string question_)
    {
        question_ = question;
        Admim *question = new Admim();
        delete question;
    };
    void Watch_Statictics(Test statistics)
    {
        std::string mass;
        std::ifstream file1(firsttest_statistics); //file_input -название файла из которого считываем
        if (file1.is_open()) //открыли файл
        {
            std::string firsttest_statistics;
            std::string line;
            while (std::getline(file1 >> std::ws, line))
            {
                mass.push_back(SplitIntoWords(line));
            }
            file1.close();//ОБЯЗАТЕЛЬНО ЗАКРЫТЬ файл
        }
    };
    void Delete_Tested()
    {
        Admim *Tested = new Tested();
        delete Tested;
    };
    void Add_Test()
    {

    };
    void Add_Tested()
    {
    };
    void Modefication_Tested()
    {
    };

    void Change_pass(string login, string pass, string new_pass)
        {
            this->login = login;
            cout << "Введите логин:"<<endl;
            cin>>login;
            this->pass = pass;
            cout << "Введите пароль:"<<endl;
            cin>>pass;

            if (this->login = login && this->pass= pass)
            {
                cout << "Введите новый пароль:" << endl;
                cin >> new_pass;
                pass=new_pass;
            };

        };

    void Change_login(string login, string pass, string new_login)
    {
        this->login = login;
        cout << "Введите логин:"<<endl;
        cin>>login;
        this->pass = pass;
        cout << "Введите пароль:"<<endl;
        cin>>pass;

        if (this->login = login && this->pass= pass)
        {
            cout << "Введите новый логин:" << endl;
            cin >> new_login;
            login=new_login;
        };
    };
        void Check_pass()
        {
        };
        void Check_login()
        {
        };

    private:
        string Encryption (string encrypted_login_, string decrypted_login_)
    {
        std::string mystr = encrypted_login_; //Зашифрованный текст
        std::string a = decrypted_login_; //Строка под расшифрованный текст

        for (int i = 0; i < mystr.size(); i++) //Запускаем цикл для каждого символа
            a += mystr[i] ^ 2; // Расшифровываем и заполянем переменную.
        std::cout << a << std::endl; //Выводим
        return 0; //Успешное завершение.
    };
        void Admin()
        {
        };
        string name;
        string question;
        string login;
        string pass;
        string name_login_pass_file;
};
class Tested : public User
        {
   friend Admin;
public:
    Tested() = default;
    Tested(string name_, string login_, string pass_):
    name(name_),
    login(login_),
    pass(pass_)
    {}
    void Registration (string name)
    {
        this->name = name;
        cout << "Введите имя тестируемого:"<<endl;
        cin>>name;
    };
    string Work_Test(Test test_)
    {

    };
    string Watch_Statictics(Test statistics_)
    {

    };

    void Check_login (string login)
    {
        this->login = login;
        cout << "Введите логин тестируемого:"<<endl;
        cin>>login;
    };
    void Check_pass (string pass)
    {
        this->pass = pass;
        cout << "Введите пароль для учетной записи тестируемого:"<<endl;
        cin>>pass;
    };
    void Continue_the_test()
    {

    };

private:


    void Watch_test_work()
    {

    };
    void Encryption()
    {

    };
    void Check_login()
    {

    };
    string name_Person_Data_file;
    string name_statictics_file;
    string name_login_pass_file;
    string name_file_test_incomplete;
    string name;
    string login;
    string pass;
};

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

category_and_all_test.insert({"mathematics", {Test("math/first_test/mathematics_first", "math/first_test/first_test_questions.txt", "math/first_test/firsttest_qanswer.txt", "mathematics"),
                                              Test("math/second_test/mathematics_second", "math/second_test/second_test_questions.txt", "math/second_test/secondtest_qanswer.txt", "mathematics"),
                                              Test("math/third_test/mathematics_third", "math/third_test/third_test_questions.txt", "math/third_test/thirdtest_qanswer.txt", "mathematics")}});
category_and_all_test.at("mathematics") [0].Display_questions();

    Singleton::GetInstance();
    Tested ser;
    ser.Watch_test();

    std::vector <std::vector<std::string>> answer_mass;
    std::vector<Test> answer_list;
    Reading_with_file(answer_mass);
    Сreate_a_vector_answer(answer_mass, answer_list);
    Record_with_file(answer_list);

    std::string name_user = "Alyonka";
    std::filesystem::path currentPath = std::filesystem::current_path();
    std::filesystem::path relativePath = currentPath / name_user;
    std::filesystem::create_directory(relativePath);

    return 0;
}
