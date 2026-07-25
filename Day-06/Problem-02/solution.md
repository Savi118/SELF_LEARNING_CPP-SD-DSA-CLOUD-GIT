Okh for Problem 2 i used multiple reused function which i think is the best thing to do bcoz it helps in reusability of these functions.

Things i used in each functions-

# inputStudents -

1. Firstly i need few things to start my observation which is let's suppose i don't know the no of students in class how i'm gonna run my loop to the end it will go like infinite so i think one thing i suppose a max no of students in class will be 100, from this i get what i need to do first i make two arrays which is parallel to each other student[100] & marks[100] which going to store each student data at each index and both index are going to be same for students.
2. After that i get a confusion like what if teacher don't have 100 students less than 100 i can't run a loop to the 100 - 1 each time for input so i decided to ask first how many student data you have which will be counted as size of array for running loop to size - 1 which is better to ask first and store it.
3. Now i used &n so it will go and store by refference not just copy of no i want to update the number inside main so when i want to print i also need that same size for printing not to run a loop till 100-1.
4. After getting n and save it to the main function i started a loop but few issues are still comes in it like when i use cin first time after that new line also detected as first cin output so i use cin.ignore() which eliminated the next line thing and only take data in that particular line and make next line for next cin by which i can easily store n first then a loop for each student and their respective marks at same index parallely.
5. And array is already by refference so it automatically save the refference and that's the thing i want so it's easy to do with a void function bcoz i didn't have anything to return all the thing going to be save automatically by reference.

# sum -

1. Easy function of all the one i use in this i just need a size which is already stored in n bcoz of input reference i just have to fetch it from avg function parameter which will fetch n from main function it's one data passed through multiple functions.
2. After getting marks array and size i just run a loop which add each value inside the result and return it.

# avg -

1. Same thing i did here now i fetch the n and marks array.
2. I convert the marks array into a double and ask it run on sum function so i get the total value and then i divide it by n so i get the average of the marks.
3. But one thing is important to tell i use double instead of int bcoz if any average is in decimal it will used for accurate compare here.

# isAboveAverage -

1. It's a bool function which i wanted just to know how many students marks above average so it just return the true of false based on student's marks.

# getGrade -

1. For getting grade i have to compare and make a rule so i did as per 'A' grade - 80+ , 'B' grade - 60+ , 'C' grade - 50+ , 'D' grade - 35+ , below 35 is 'F' means fail.

# printReport -

1. For printing i just use visualization what i need first i have to know the requirements for the procedure and i just don't have to return anything i use void as same as input and for requirement i just need same thing as input.
2. Now i have to store average first bcoz i will going to do calculation on average first so i just store the average first by passing marks and size into that and store it.
3. then run a loop where each student name marks and grade just printing and also use getGrade in it to get grade of each student loop help me to do for each student.
4. after i just print average marks.
5. after that i need to print the students name inside the above average so i just use a loop in whichever student name comes above average i use isAboveAverage function where i get the answer if student marks above average i just print their name and then go on for all the students to check.
