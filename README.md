# Dull Queen Game

Simulating the [game mentioned by Matt Geer](https://www.facebook.com/groups/dullmensclub/posts/1564667570856445/) because why the dull not.

## Instructions

1. Clone the repo
1. Type `make` on a suitable setup able to compile C++.

## How it works

Basically you run it and it simulates playing the game many times, counting how many times we got to the situation mentioned by Matt. It shows you the experimental probability every 10k games (as you need to play many to get a good approximation of the probability)

For example, I got the following output from it. The more games played, the better the approximation. The theoretical is `51!/52! = 1/52 = 0.01923076923076923076923076923077` and in this run it got `0.0194625` at 240000 games simulated.

```
173 wins / 10000 games = 0.0173
370 wins / 20000 games = 0.0185
585 wins / 30000 games = 0.0195
759 wins / 40000 games = 0.018975
944 wins / 50000 games = 0.01888
1156 wins / 60000 games = 0.0192667
1345 wins / 70000 games = 0.0192143
1550 wins / 80000 games = 0.019375
1758 wins / 90000 games = 0.0195333
1962 wins / 100000 games = 0.01962
2147 wins / 110000 games = 0.0195182
2349 wins / 120000 games = 0.019575
2533 wins / 130000 games = 0.0194846
2753 wins / 140000 games = 0.0196643
2916 wins / 150000 games = 0.01944
3115 wins / 160000 games = 0.0194687
3274 wins / 170000 games = 0.0192588
3480 wins / 180000 games = 0.0193333
3686 wins / 190000 games = 0.0194
3884 wins / 200000 games = 0.01942
4074 wins / 210000 games = 0.0194
4281 wins / 220000 games = 0.0194591
4481 wins / 230000 games = 0.0194826
4671 wins / 240000 games = 0.0194625
...
```