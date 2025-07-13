# Задание:
Написать программу, которая генерирует HTML-страницу с заголовком «Наименование организации, на базе которой Вы проходите практическую подготовку» и информацией об организации. Также добавить к странице CSS-стили для текста, используя официальный шрифт компании. Предложить 5 вариантов шрифтов. Ответ предоставить в виде ссылки на репозиторий GitHub или другого удобного сервиса.

## Шаг 1: Анализ задачи
### Генерация HTML-страницы :
Страница должна содержать заголовок: «Наименование организации, на базе которой Вы проходите практическую подготовку».
Добавить информацию об организации (например, название, адрес, контактные данные).
### Добавление стилей :
Использовать CSS для форматирования текста.
Официальный шрифт компании можно найти на сайте https://kkep.ru/ или использовать популярные шрифты (например, Arial, Times New Roman).
### Варианты шрифтов :
Предложить 5 вариантов шрифтов для отображения текста.
### Тестирование :
Проверить корректность работы программы.
Убедиться, что HTML-страница правильно отображается в браузере.

## Шаг 2: Реализация программы
### 1. Структура программы
Программа будет написана на Python, так как это простой и мощный язык для генерации HTML-страниц. Мы будем использовать модуль webbrowser для автоматического открытия сгенерированной страницы в браузере.
### 2. Код программы
Код выложен в файле FullCode.py

## Шаг 3: Объяснение кода
### 1. Импорт модулей
```
import webbrowser
```
Модуль webbrowser используется для автоматического открытия HTML-страницы в стандартном браузере системы.
### 2. Информация об организации
```
organization_name = "Krasnodar College of Electronic Instrumentation"
address = "Address: Krasnodar, ul. Zipovskaya, d. 7, 350072"
contact_info = "Phone: +7(861)257-04-76, Email: kkep@kkep.ru"
```
### 3. HTML-шаблон
```
html_content = f"""
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Organization Information</title>
    <style>
        body {{
            font-family: 'Arial', sans-serif; /* Default font */
            background-color: #f4f4f4;
            color: #333;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }}
        .container {{
            text-align: center;
            background: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }}
        h1 {{
            font-size: 2em;
            margin-bottom: 20px;
        }}
        p {{
            font-size: 1.2em;
            line-height: 1.6;
        }}
        /* Font variants */
        .font1 {{
            font-family: 'Arial', sans-serif;
        }}
        .font2 {{
            font-family: 'Times New Roman', serif;
        }}
        .font3 {{
            font-family: 'Verdana', sans-serif;
        }}
        .font4 {{
            font-family: 'Georgia', serif;
        }}
        .font5 {{
            font-family: 'Courier New', monospace;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>Organization Name for Practical Training</h1>
        <p class="font1">Organization: {organization_name}</p>
        <p class="font2">Address: {address}</p>
        <p class="font3">Contacts: {contact_info}</p>
        <p>Font Variants:</p>
        <p class="font1">1. Arial (sans-serif)</p>
        <p class="font2">2. Times New Roman (serif)</p>
        <p class="font3">3. Verdana (sans-serif)</p>
        <p class="font4">4. Georgia (serif)</p>
        <p class="font5">5. Courier New (monospace)</p>
    </div>
</body>
</html>
"""
```
HTML-структура : Страница содержит заголовок (<h1>), информацию об организации (<p>), и варианты шрифтов.
CSS-стили :
Основной шрифт: Arial.
Дополнительные классы для демонстрации разных шрифтов (font1, font2, etc.).
Цвет фона, отступы и тени для лучшей визуализации.
### 4. Сохранение HTML-страницы
```
with open("organization_info.html", "w", encoding="utf-8") as file:
    file.write(html_content)
```
Создается файл organization_info.html и записывается в него сгенерированный HTML-контент.
### 5. Открытие страницы в браузере
```
webbrowser.open("organization_info.html")
```
Автоматически открывает сгенерированную страницу в стандартном браузере системы.

## Шаг 4: Тестирование программы
### 1. Запуск программы
Сохрание кода в файле, например, FullCode.py.
Запуск программы в BASH
```
python FullCode.py
```
После запуска программа автоматически создаст файл organization_info.html и откроет его в браузере.
### 2. Проверка результатов
Зайти в файл organization_info.html и проверить на корректность отображения информации
### 3. Проверка отображения шрифтов
На странице показаны 5 вариантов шрифтов:
Arial (sans-serif).
Times New Roman (serif).
Verdana (sans-serif).
Georgia (serif).
Courier New (monospace).
