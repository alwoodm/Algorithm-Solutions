# Superhero Transformation

All comic book experts know perfectly well that individual superheroes can occasionally transform into other characters. Of course, not every superhero can transform into any other, because it must take place according to strict rules.*

The rules state that a superhero named S can transform into a superhero named T only if the string S can be changed into string T by changing vowels to any other vowels and changing consonants to any other consonants. The length of both strings must be the same.

We consider names with lengths from 1 to 1000 characters, written using lowercase Latin alphabet letters, and we consider the characters a, e, i, o, u, and y as vowels.

Write a program that reads two names and answers the question of whether they meet the described rules.

## Input
The first and only line of input contains two superhero names separated by a single space.

## Output
The program should output the word YES or NO depending on whether one superhero can transform into another.

## Example 1
Input:
kangur wombat

text
Output:
YES

text

## Example 2
Input:
superman superwoman

text
Output:
NO

text
These names differ in length.

## Example 3
Input:
abc xyz

text
Output:
NO

text
The letter a is a vowel, while x is a consonant. Additionally, b is a consonant, and y is a vowel.

*The rules are reportedly recorded in the Sacred Crystals from the planet Krypton.
Difficulty: 2/5 (Easy)