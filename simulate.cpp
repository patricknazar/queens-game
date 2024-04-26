/**
 * Simulating https://www.facebook.com/groups/dullmensclub/posts/1564667570856445/ for fun
 */
#include <iostream>
#include <random>
using namespace std;

const uint32_t MAX = 10000, NUM_GAMES = 1000000, PRINT_INTERVAL = 10000;
random_device rd;
uniform_int_distribution<uint32_t> dist(1, MAX);

/**
 * Plays a game. Returns true if we got to play 51 times without getting that one card, false otherwise
 */
bool playGame()
{
  for (int cards = 52; cards > 1; cards--)
  {
    auto num = dist(rd);
    if (num <= (MAX / cards))
    {
      return false;
    }
  }
  return true;
}

/**
 * Play NUM_GAMES games and show us the experimental probability every INTERVAL games
 */
int main()
{
  int wins = 0;
  for (int64_t games = 1; games < NUM_GAMES; games++)
  {
    if (playGame())
    {
      wins++;
    }
    if (games % PRINT_INTERVAL == 0)
    {
      double p = (double)wins / (double)games;
      cout << wins << " wins / " << games << " games = " << p << endl;
    }
  }
  return 0;
}