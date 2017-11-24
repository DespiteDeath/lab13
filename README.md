# lab13

Структура `Person` определяется следующим образом:

```cpp
struct Email {
  std::string nickname;
  std::string server;
};

struct Person {
  std::string  first_name;
  std::string  last_name;
  Email        email;
  size_t       age;
  std::string  phone;
};
```

yamllint config.yaml (проверка на ошибки файла формата yaml)
```ShellSession
$ config.yaml
$ warning  missing document start "---"  (document-start)
```
