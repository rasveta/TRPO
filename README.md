# ТРПО

## Лабораторная работа №7

### Задание

1. Создание программы на языке _С++_
2. Публикация на **Github** с помощью системы контроля версий **Git**

### Последовательность работы

1. В папке «ТРПО» создать подпапку «Лабораторная работа №7».
2. Запустить программу C++ Builder XE и создать новый проект с типом VCL Forms Application.
3. Сохранить все его файлы в папке с именем «Лабораторная работа №6», задав название проекта по Вашей фамилии на английском языке (расширение cbproj).
4. Поместить на форму кнопку Button1 и в свойстве Caption дать название ей «Нарисовать».
5. В обработчике кнопки «Нарисовать» разработать программу для прорисовки на поверхности формы геометрической фигуры заданного цвета.

### Фрагмент кода программы

#### Обработчик нажатия кнопки

```cpp
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(10, 10, 50, 50);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(50, 50, 170, 170);
}
```

#### Результат работы программы

![Result](https://sun9-59.userapi.com/impg/y7KHOkvBc2Jh_Y1VszvE83Y2LA2sQlzHVXbHZw/6AOzvSkgXBc.jpg?size=317x343&quality=96&proxy=1&sign=dd974569c8a8b3247b0a5504158b2305&type=album)

Проект был создан в среде разработки С++ Builder

***

### Работа с системой контроля версий

Для выполнения данной лабораторной были использованы:

1. **Git**
1. **Visual Studio Code** и плагины
    1. Markdown Shortcuts
    1. markdownlint
    1. GitHub Pull Request and Issues

Также были использованы [уроки](https://docs.microsoft.com/ru-ru/learn/modules/introduction-to-github-visual-studio-code/)