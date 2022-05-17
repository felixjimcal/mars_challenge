# mars_challenge

We are seeking evidence of clean, simple, tested code with evidence of **good design** and **OOP skills**.<br />
We would like to see that your code has been developed using **TDD** and expect a good level of knowledge of the chosen language.<br />
<br />
For the solution, we request that you use **Java**, Ruby, C#, **Python**, Clojure, Scala or JavaScript.<br />
<br />
There must be a way to supply the application with the input data via text file.<br />
We need to be able to build and run your code ourselves.<br />
<br />
Rules:<br />
Do not not use any external libraries to solve this problem, but you may use external libraries or tools for building or testing purposes.<br />
Specifically, you may and are encouraged to use unit-testing libraries and build tools available for your chosen language (e.g., JUnit, Ant, NUnit, Rspec, Rake, etc.)
<br />
<br />
Please include a brief explanation of your design and assumptions, along with your code, as well as detailed instructions to run your application.
<br />
<br />
Problem : Mars Rover
 
A squad of robotic rovers are to be landed by NASA on a plateau on Mars.<br />
This plateau, which is curiously rectangular, must be navigated by the rovers so that their on-board cameras can get a complete view of the surrounding terrain to send back to Earth.
A rover’s position and location is represented by a combination of x and y co-ordinates and a letter representing one of the four cardinal compass points.
The plateau is divided up into a grid to simplify navigation. An example position might be 0, 0, N, which means the rover is in the bottom left corner and facing North.
<br />
In order to control a rover, NASA sends a simple string of letters.<br />
The possible letters are ‘L’, ‘R’ and ‘M’. ‘L’ and ‘R’ makes the rover spin 90 degrees left or right respectively, without moving from its current spot. <br />
‘M’ means move forward one grid point, and maintain the same heading.<br />
Assume that the square directly North from (x, y) is (x, y+1).
<br />
<br />
Input:<br />
The first line of input is the upper-right coordinates of the plateau, the lowerleft coordinates are assumed to be 0,0.<br />
The rest of the input is information pertaining to the rovers that have been deployed.<br />
Each rover has two lines of input. The first line gives the rover’s position, and the second line is a series of instructions telling the rover how to explore the plateau.<br />
The position is made up of two integers and a letter separated by spaces, corresponding to the x and y co-ordinates and the rover’s orientation.<br />
Each rover will be finished sequentially, which means that the second rover won’t start to move until the first one has finished moving.<br />
<br />
Output: <br />
The output for each rover should be its final co-ordinates and heading.<br />
<br />
<br />
Input and Output<br /> 
Test Input:<br />
5 5<br />
1 2 N<br />
LMLMLMLMM<br />
3 3 E<br />
MMRMMRMRRM<br />
 <br />
Expected Output:<br />
1 3 N<br />
5 1 E<br />

<br />
