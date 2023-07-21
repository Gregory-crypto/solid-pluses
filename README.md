# solid-pluses
Bunch of c++ programs

## Passwords
### What program do
Checks the password you come up with against the following criteria: 
- consist of ASCII table characters with codes from 33 to 126;
- be no shorter than 8 characters and no longer than 14 characters;
- at least three of the 4 character classes - capital letters, small letters, numbers, other characters - must be present in the password.
The program outputs `YES` if the password meets the requirements and `NO` otherwise
### Input
`Vasya123`
### Output
`YES`

## Soundex algorithm
The Soundex algorithm determines whether two English words are similar in sound. It takes a word as input and replaces it with some four-character code. If the codes of the two words match, the words usually sound similar.
### How program do
1. The first letter of the word is retained.
2. In the rest of the word, the letters a, e, h, i, i, o, u, w and y are deleted;
3. The remaining letters are replaced by numbers from 1 to 6, with similar-sounding letters corresponding to the same numbers:
  - b, f, p, v: 1
  - c, g, j, k, q, s, x, z: 2
  - d, t: 3
  - l: 4
  - m, n: 5
  - r: 6
4. Any sequence of consecutive identical digits is reduced to one such digit.
5. The resulting string is truncated to the first four characters.
6. If the length of the string is less than four characters, zeros are added at the end.
