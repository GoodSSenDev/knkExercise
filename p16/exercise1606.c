struct time split_time(long total_seconds)
{
	return (struct time){.hours = total_seconds/3600,
					.minutes = (total_seconds % 3600) / 60
					.seconds = (total_seconds % 3600) % 60};
}