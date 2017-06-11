# Basic-Course-on-Programming-Project-2
C++

Purpose of this programming project:

After finishing this project you should have general knowledge about implementing simple graphical user interfaces with Qt. You will also have some experience about finding Qt related information on your own as you are required to use a previously unfamiliar component (menuBar) in your program.

The program to be implemented:
The user interface is not very different from the one you implemented in weekly assignment 08. There should not be complications when implementing the labels, spin boxes and sliders. However, there is on new feature used in the sample program you also need to implement: there are two drop down menus (Action and Gender) located on the menu bar at the top of the window.
It is also worth noticing that in the Gender menu only on selection is active at the time. In the image above the active selection is identified by the small circle. In your implementation the circle might be replacd by something else, maybe a check mark (✓). This doesn't matter.

Technical details about body mass index (BMI):
We should calculate a body mass index (BMI) by its formula and present it in the UI.
The weight is expressed and kilograms and the weight as meters. Your should probably make a note that the user interface slider and spinbox use centimeters instead. As a reasult of the calculations is a number generally between 19–40 but in extreme cases it can also be outside this range.

The BMI value is interpreted somewhat differently depending on the gender of the "test subject":

Males
Calculated BMI value	Interpretation
BMI	≤	20.7	underweight
20.7	<	BMI	≤	26.4	normal
26.4	<	BMI	≤	27.8	slight overweight
27.8	<	BMI	≤	31.1	overweight
31.1	<	BMI			much overweight
 
Females
Calculated BMI value	Interpretation
BMI	≤	19.1	underweight
19.1	<	BMI	≤	25.8	normal
25.8	<	BMI	≤	27.3	slight overweight
27.3	<	BMI	≤	32.2	overweight
32.2	<	BMI			much overweight
Special requirements for this project
