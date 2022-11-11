# Regular-Expressions
Implementing RegEx (Regular Expressions) in QT, C++.

As Regular Expressions are very useful, here is how to use them with QT and C++. Once you have your GUI set up you then write out your expression as usual in the constructor of a QRegExp Object from the QT Class. In this case we're implementing a restriction on what the user can enter into the field so that it must be consistant with a reference typically found on a spreadsheet application like Microsoft Excel. 

Regular Expression: [A-Za-z][1-9][0-9]{0,2}

So we can accept entries which have a single first letter (Upper or Lowercase), a single digit from 1-9, and anywhere from 0 - 2 digits from 0-9 on the end. So valid entries might be A1, or x33, or K132 for example. If the user does not enter in a matching string, the entry is not shown in the edit box.
This way we can validate data at this stage for further processing later in our program.

![alt text](https://github.com/GitDhamani/Regular-Expressions/blob/main/ScreenShot.png?raw=true)
