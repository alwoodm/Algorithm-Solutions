# God Sent an Old Woman

A team of ambitious feminist archaeologists led by the tireless Professor Paulina Krystynowicz is studying various historical sources, including ancient manuscripts, searching for traces of information about outstanding women in science, culture, and politics. They have already managed to establish beyond any doubt that Copernicus was a woman, and are currently working on Archimedes and Margaret Thatcher.

The research method is simple: they search for words from which, after removing unnecessary letters, the word "baba" remains. For example, such a word is "bumwakawakabumwakawaka" from the Old Zulu language (meaning "Woman, give me a non-alcoholic beer").

There are many words to examine, so the ladies would certainly be happy with a program that would help them in their work.

## Input
The first line of the input contains a natural number n - the number of words to examine (1 ≤ n ≤ 10^4).
Each of the next n lines contains a word (up to 100 characters - lowercase letters of the Latin alphabet).

## Output
For each read word, the program should output a line of text containing the word "Yes" or "No" depending on whether the word "baba" can be obtained from it.

## Example
**Input:**
```
5
bumwakawakabumwakawaka
abba
babaryba
baribal
pamelaanderson
```

**Output:**
```
Yes
No
Yes
Yes
No
```

## Difficulty
Easy to Medium (2/5)

This is a straightforward subsequence checking problem where you need to determine if the letters 'b', 'a', 'b', 'a' appear in order within each word.
