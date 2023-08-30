# CourseWork
Russian:

Курсовая работа разделена на 3 различных задания.

C++:

---1---

В первом задании необходимо создать класс библиографических описаний книг CBookCard. Класс должен содержать поля: автор, заглавие, издательство, год издания, ББК, рейтинг, комментарий . 
  1.	Все поля должны быть закрытыми. Для всех их должны быть созданы методы доступа (или свойства). 
  2.	В конструкторе за исключением рейтинга и комментария должна осуществляться инициализация всех полей. 
  3.	Необходимо создать метод, выводящий описание книги в строку (переопределение метода ToString()), в которой будут присутствовать все значения полей класса, кроме поля – «комментария».
  В данном методе значение поля ББК выводится через пробел без использования знаков препинания.
  Значения атрибута рейтинг должно выводиться в следующей форме: Рейтинг:    <значение   рейтинга>.
  4.	Создать два объекта библиографических описаний книг. Вызвать для них метод, осуществляющий вывод строки библиографического описания.
  Можно использовать как реально существующие книги, так и чисто гипотетические.
  5.	Создать массив (размерностью не более 5) объектов библиографических описаний книг. Создать статический метод для упорядочивания (по году издания) данного массива.
     
  Вывести на экран значения массива до сортировки и после сортировки.
  
---2---

Необходимо реализовать иерархию классов предметной области на языке C++.

  Требования и рекомендации:
  1.	Иерархия классов должна состоять не менее чем из 3-х уровней. 
  2.	Каждый класс должен содержать уникальный набор полей. 
  3.	В классах не должно быть открытых полей (должны быть модификаторы доступа private или protected). Для доступа к полям класса необходимо использовать свойства.
  4.	В процессе реализации иерархии классов использовать абстрактные классы.
  5.	Классы рекомендуется оформить в виде библиотеки классов. Проверку функциональности осуществить в консольном проекте.
Моё задание:
Магазин. Определить иерархию товаров магазина. Создать продовольственный магазин. Определить общую стоимость товаров магазина, стоимость товаров заданной категории.

Python:

---3---

Создать класс, соответствующий индивидуальному варианту задания. Создать коллекцию для хранения экземпляров созданного класса.
Вид коллекции выбрать самостоятельно. Написать Windows-приложение для работы с этой коллекцией, которое позволит выполнять:
  1.	добавление элемента в коллекцию с клавиатуры;
  2.	считывание данных из файла;
  3.	запись данных в тот же или указанный файл;
  4.	сортировку данных по различным критериям;
  5.	поиск элемента по заданному полю;
  6.	вывод всех элементов, удовлетворяющих заданному условию;
  7.	удаление элемента из коллекции.
     
Приложение должно содержать меню, диалоговые окна и предусматривать обработку ошибок.
Описать класс с именем ZNAK, содержащий следующие поля:
  
  •	фамилия, имя;
  
  •	знак Зодиака;
  
  •	дата рождения (массив из трех чисел).
  
Написать программу, выполняющую следующие действия:

  •	см. общее задание;
  
  •	ввод с клавиатуры данных (записи должны быть упорядочены по дате рождения);
  
  •	вывод на экран информации о человеке, чья фамилия введена с клавиатуры (если такого нет, вывести соответствующее сообщение).

English:

The course work is divided into 3 different tasks.

C++:

---1---

In the first task, you need to create a class of bibliographic descriptions of CBookCard books. The class must contain the following fields: author, title, publisher, year of publication, BBK, rating, comment .
  1. All fields must be closed. Access methods (or properties) must be created for all of them.
  2. In the constructor, with the exception of the rating and comment, all fields must be initialized.
  3. It is necessary to create a method that outputs the description of the book in a string (redefinition of the toString() method), in which all the values of the class fields will be present, except for the "comment" field.
  In this method, the value of the BBK field is separated by a space without using punctuation marks.
  The values of the rating attribute should be output in the following form: Rating: <rating value>.
  4. Create two objects of bibliographic descriptions of books. Call a method for them that outputs a string of bibliographic description.
  You can use both real-life books and purely hypothetical ones.
  5. Create an array (with a dimension of no more than 5) of objects of bibliographic descriptions of books. Create a static method for ordering (by year of publication) this array.
     
  Display the array values before sorting and after sorting.

---2---

It is necessary to implement a hierarchy of domain classes in C++.
  Requirements and recommendations:
  1. The hierarchy of classes should consist of at least 3 levels.
  2. Each class must contain a unique set of fields.
  3. Classes should not have open fields (there should be private or protected access modifiers). To access class fields, you must use properties.
  4. In the process of implementing the hierarchy of classes, use abstract classes.
  5. Classes are recommended to be designed in the form of a class library. Check the functionality in the console project.
My assignment:
Shop. Define the hierarchy of the store's products. Create a grocery store. Determine the total cost of the store's goods, the cost of goods of a given category.

Python:

---3---

Create a class corresponding to an individual version of the task. Create a collection to store instances of the created class.
Choose the type of collection yourself. Write a Windows application to work with this collection, which will allow you to:
  1. add an item to the collection from the keyboard;
  2. reading data from a file;
  3. writing data to the same or specified file;
  4. sorting data by various criteria;
  5. search for an element by a given field;
  6. output of all elements satisfying the specified condition;
  7. deleting an item from the collection.
     
The application must contain menus, dialog boxes and provide error handling.
Describe a class named ZNAK containing the following fields:

  • last name, first name;
  
  • zodiac sign;
  
  • date of birth (an array of three numbers).
  
Write a program that performs the following actions:

  • see the general task;
  
  • keyboard input of data (entries should be ordered by date of birth);
  
  • display information about the person whose last name is entered from the keyboard (if there is no such, display the corresponding message).














