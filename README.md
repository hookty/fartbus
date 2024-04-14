
# reservations
gcc -Wall -Wextra -Werror

## Building

Command line:

* `make` to build. An executable called `reservations` will be produced.

## Files

* `reservations.c`: Main program file.

## Data

Threads!

## Functions

# mine
int reserve_seat(int n)
int free_seat(int n)
int is_free(int n)
int verify_seat_count(int n)

# theirs
void *seat_broker(void *arg)
int main(int argc, char *argv[]) // usage: reservations seat_count broker_count xaction_count
## Notes