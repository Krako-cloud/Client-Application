// This file is part of Krako Client

#ifdef _WIN32
extern void log_message_startup(const char* msg);
extern void log_message_error(const char* msg);
extern void log_message_error(const char* msg, int error_code);
extern int boinc_main_loop();
#endif

