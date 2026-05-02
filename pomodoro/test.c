#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <libnotify/notify.h>
int main() {

  notify_init("wretchPomo");
  int interval = 5;
  while (1) {
    sleep(interval);

    NotifyNotification *n =
      notify_notification_new("Pomodoro", "Time's up.", "dialog-information");

    notify_notification_set_timeout(n, 5000);
    notify_notification_show(n, NULL);

    g_object_unref(G_OBJECT(n));
  }

  notify_uninit();
}
