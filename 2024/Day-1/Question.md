## --- Day 1: Historian Hysteria ---

The Chief Historian is always present for the big Christmas sleigh launch, but nobody has seen him in months! Last anyone heard, he was visiting locations that are historically significant to the North Pole; a group of Senior Historians has asked you to accompany them as they check the places they think he was most likely to visit.

As each location is checked, they will mark it on their list with a star. They figure the Chief Historian must be in one of the first fifty places they'll look, so in order to save Christmas, you need to help them get fifty stars on their list before Santa takes off on December 25th.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

You haven't even left yet and the group of Elvish Senior Historians has already hit a problem: their list of locations to check is currently empty. Eventually, someone decides that the best place to check first would be the Chief Historian's office.

Upon pouring into the office, everyone confirms that the Chief Historian is indeed nowhere to be found. Instead, the Elves discover an assortment of notes and lists of historically significant locations! This seems to be the planning the Chief Historian was doing before he left. Perhaps these notes can be used to determine which locations to search?

Throughout the Chief's office, the historically significant locations are listed not by name but by a unique number called the location ID. To make sure they don't miss anything, The Historians split into two groups, each searching the office and trying to create their own complete list of location IDs.

There's just one problem: by holding the two lists up side by side (your puzzle input), it quickly becomes clear that the lists aren't very similar. Maybe you can help The Historians reconcile their lists?

### Problem Description

Given two lists of location IDs, calculate the total distance between them. Pair up the smallest numbers from each list, the second smallest numbers, and so on. The distance between two numbers is the absolute difference, and the total distance is the sum of these differences.

For example:

```
Left List:   3, 4, 2, 1, 3, 3
Right List:  4, 3, 5, 3, 9, 3
```

**Pairing and Distances**:
- Pair `1` and `3`: Distance = `2`
- Pair `2` and `3`: Distance = `1`
- Pair `3` and `3`: Distance = `0`
- Pair `3` and `4`: Distance = `1`
- Pair `3` and `5`: Distance = `2`
- Pair `4` and `9`: Distance = `5`

**Total Distance**: `2 + 1 + 0 + 1 + 2 + 5 = 11`
---

## --- Part Two ---

Your analysis only confirmed what everyone feared: the two lists of location IDs are indeed very different.

Or are they?

The Historians can't agree on which group made the mistakes or how to read most of the Chief's handwriting, but in the commotion you notice an interesting detail: a lot of location IDs appear in both lists! Maybe the other numbers aren't location IDs at all but rather misinterpreted handwriting.

This time, you'll need to figure out exactly how often each number from the left list appears in the right list. Calculate a total similarity score by adding up each number in the left list after multiplying it by the number of times that number appears in the right list.

### Problem Description

Given the same two lists, calculate the **similarity score**:
- For each number in the left list, count how many times it appears in the right list.
- Multiply the number by the product of its occurrences in both lists.
- Sum these values to get the similarity score.

**Example Input**:

```
Left List:   3, 4, 2, 1, 3, 3
Right List:  4, 3, 5, 3, 9, 3
```

**Calculations**:
- `3` in left appears 3 times in right: Contribution = `3 * 3 = 9`
- `4` in left appears 1 time in right: Contribution = `4 * 1 = 4`
- `2` in left appears 0 times in right: Contribution = `2 * 0 = 0`
- `1` in left appears 0 times in right: Contribution = `1 * 0 = 0`
- Total Similarity Score = `9 + 4 + 0 + 0 + 9 + 9 = 31`
---
