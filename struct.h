#include <stdio.h>
struct account{
	int id;
	char name[10];
	char pass[30];
};

struct train{
	int tid;
	char train_name[20];
	int train_no;
	int av_seats;
	int last_seatno_used;
};

struct bookings{
	int bid;
	int type;
	int acc_no;
	int tr_id;
	char trainname[20];
	int seat_start;
	int seat_end;
	int cancelled;
};

