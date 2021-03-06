#include "ush.h"

void mx_delete_process_by_pid(t_info *info, int pid) {
    t_list *tmp = info->processes;
    t_list *tmp2 = info->processes;

    if (info->processes) {
        if (((t_process*)tmp->data)->pid == pid) {
            mx_delete_last_process(info);
            return;
        }
        while (tmp->next) {
            if (((t_process*)tmp->next->data)->pid == pid) {
                tmp2 = tmp->next;
                tmp->next = tmp->next->next;
                mx_del_strarr(&((t_process*)tmp2->data)->name);
                free(tmp2->data);
                free(tmp2);
                return;
            }
            tmp = tmp->next;
        }
    }
}
