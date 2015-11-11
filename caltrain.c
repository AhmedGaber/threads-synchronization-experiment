#include <pthread.h>
#include "caltrain.h"



void
station_init(struct station *station)
{
  station->out_passengers = 0;
  station->in_passengers = 0;
  pthread_mutex_init(&(station->lock), NULL);
  pthread_cond_init(&(station->train_arrived_cond), NULL);
  pthread_cond_init(&(station->passengers_seated_cond), NULL);
  pthread_cond_init(&(station->train_is_full_cond), NULL);
}

void
station_load_train(struct station *station, int count)
{
	// FILL ME IN
}

void
station_wait_for_train(struct station *station)
{
	// FILL ME IN
}

void
station_on_board(struct station *station)
{
	// FILL ME IN
}
