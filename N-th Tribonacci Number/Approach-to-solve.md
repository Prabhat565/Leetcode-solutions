<h1><a href = "https://leetcode.com/problems/n-th-tribonacci-number/description/" target="_blank">Tribonacci Sequence</a><h1>
<h3>This repository contains a C++ solution to find the nth term of the Tribonacci sequence.</h3>
<h2>Problem Statement</h2>
The Tribonacci sequence is a generalization of the Fibonacci sequence, where each term is the sum of the three preceding terms. 
  The sequence starts with 0, 1, 1, and the subsequent terms are obtained by summing the last three terms. Given an integer n, the task is to find the nth term of the Tribonacci sequence.

  <h2>Approach</h2>
  <ul>
    <li>Initialize three variables a, b, and c to represent the first three terms of the sequence.</li>
    <li>If n is 0 or 1, return n as the result since the sequence starts with 0, 1, 1.</li>
  <li>Use a for loop starting from i = 3 to n.</li>
    <li>In each iteration, compute the sum of the last three terms (a, b, and c) and update the variables accordingly.</li>
    <li>After the loop, the value of c will represent the nth term of the Tribonacci sequence. </li>
    <li>Return the value of c as the result.</li>
  </ul>

        int a = 0, b = 1, c = 1;

        if (n == 0 || n == 1) {
            return n;
        }

        for (int i = 3; i <= n; i++) {
            int sum = a + b + c;
            a = b;
            b = c;
            c = sum;
        }

        return c;
    }

\*\*(For full code , refer to the .cpp file)

<h2>Complexity Analysis</h2>
<ul>
  <li><h3>Time Complexity: 𝑂(𝑛)</h3>
<span> - Since the solution iterates from 3 to n once.</span></li>

  <li><h3>Space Complexity: O(1)</h3>
<span> - The solution uses only a constant amount of extra space.</span></li>
</ul>
