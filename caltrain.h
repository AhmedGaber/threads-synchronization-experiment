#include <pthread.h>

struct station {
  int out_passengers; // in station waiting passengers
  int in_passengers; // in train passengers 
  pthread_mutex_t lock;
  pthread_cond_t cond_train_arrive;
  pthread_cond_t cond_passengers_seated;
  pthread_cond_t cond_train_is_full;
};

void station_init(struct station *station);

void station_load_train(struct station *station, int count);

void station_wait_for_train(struct station *station);

void station_on_board(struct station *station);
