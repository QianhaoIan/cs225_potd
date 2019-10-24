#include "epoch.h"
/* Your code here! */

int hours(time_t sec_since_epoch){
	long hours = sec_since_epoch/60/60;
	return hours;
}

int days(time_t sec_since_epoch){
	long days = sec_since_epoch/60/60/24;
	return days;
}

int years(time_t sec_since_epoch){
	long years = sec_since_epoch/60/60/24/365;
	return years;
}
