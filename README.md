# 2nd-Order-Differential-Equation-Solver
## Overview
This is a project from when I was learning C++ at University. It showcases the use of functions, pointers and passing by reference (memory management is a huge advantage of C++!). This is a basic programme which solves second order ODEs, however it was a good task to practise the aforementioned skills.

## Objectives
The programme's goal is to find a general solution to a second order linear homogeneous ODE with constant coefficients analytically, using the quadratic formula to find the roots of the auxiliary equation. Because the kind of roots determine the form of the solution, the discriminant was needed as well as the solutions, hence the need for pointers as this was made into a function.

## Tech Stack
A summary of the tools/software used in this project is given below:
<ul>
    <li>Visual Studio Code</li>
    <li>C++, cmath</li>
</ul>

## Test Inputs/Outputs
Three distinct cases were tested for this project to exhaust the possible kinds of roots of the auxiliary equation and hence forms of the general solution. For the differential equation $a\frac{d^2y}{dx^2}+b\frac{dy}{dx}+cy=0$, the following values were input:
<ol>
    <li>$a=1$, $b=5$, $c=6$ (distinct real roots)</li>
    <li>$a=1$, $b=6$, $c=9$ (repeated real root)</li>
    <li>$a=1$, $b=2$, $c=2$ (complex conjugate roots)</li>
</ol>
These gave the following outputs, respectively:
<ol>
    <li>General solution:<br>y = Ae^(-2x) + Be^(-3x)</li>
    <li>General solution:<br>y = (A + Bx)e^(-3x)</li>
    <li>General solution:<br>y = e^(-1x)(Acos(1x) + Bcos(1x))</li>
</ol>
Perfect!

## Next Steps
To improve this project, I would do the following:
<ul>
    <li>Implement an option for boundary conditions to solve a complete system.</li>
    <li>Include other differential equation forms such as the Euler-Cauchy differential equation or even linear first order ODEs.</li>
</ul>

