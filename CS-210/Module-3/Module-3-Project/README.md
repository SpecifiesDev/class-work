# Project Summary
Chada Tech Time Clock was a project where the goal was to display time in two different formats, a 24 hour and 12 hour format. User should be able to add to hours, minutes, seconds, as well as exit. As time is added, both formats should be updated and display concurrently.

## What did you do particulary well?

I think I did well in modularizing the code. I purposely kept utility functions and classes outside of the main class, and broke everything down into neat comments so that any outside reader knew what was going on.

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

One way I could enhance my code is by merging the two classes into one. This one class would store a time state, and have an additional get12HourTime(). This method would convert h/m/s to HH:MM:SS in a 12 hour format. Class would still store a state indicating AM/PM, removing the need for two external classes. In terms of memory, this is definitely a better way to go. You are only storing one object on the stack as opposed to two. Additionally it makes the program more lightweight in terms of complexity and length.


## Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

At the time this project was one of my first forays into C++. I remember spending at least 45 minutes trying to figure out method linking between header and cpp files. I did not understand that your header is essentially like a java interface, where the cpp file is where method logic is placed. My struggle was figuring out I needed to link them together using :: pointers. Visual studio actually has the ability to "search web" for errors that are thrown, and this is how I discovered what was going wrong. Slowly but surely I narrowed my search to the specific issue I was having with the code and was able to find documentation about why there was a linking error.

## What skills from this project will be particularly transferable to other projects or course work?

I think this project does a wonderful job at emphasizing the use of OOP. Rather than needing to store variables in a global scope, I can specifically localize variables and create logic for the specific needs of the program requirements. This creates the potential for massive reusability, especially when combined with polymorphism and function overriding. 

## How did you make this program maintainable, readable, and adaptable?

I did this by modularizing everything, and ensuring I commented where it was necessary. This kept everything readable, and makes it easy to maintain if I ever need to come back to it. I achieve adaptability by keeping relational chains outside of the class at a minimum so if any internal variable or method needs to be changed it can be done locally. This change will then by nature be applied to any class / method that creates a new object.
