#include "Header.h"

struct dev_sample* Bubble(struct dev_sample* head, int count)
{
    struct dev_sample* pcurrent = head, * psave = NULL, * pswap = NULL, * pswap2 = NULL;
    int select_dir, select_field;

    if (head == NULL || count < 1) {
        printf("Отсутствуют данные!\n");
        return 0;
    }
    
        Table(head, count);
        
        printf("Номер поля по которому необходимо произвести сортировку: ");
        while (scanf("%d", &select_field) != 1) {
            printf("Неверно введенное значение, попробуйте еще: ");
            while (getchar() != '\n') continue;
        } 
        
        printf("Сортировка по:\n1. По убывванию\n2. По возрастанию\n");
        while (scanf("%d", &select_dir) != 1 || select_dir < 0) {
            printf("Неверно введенное значение, попробуйте еще: ");
            while (getchar() != '\n') continue;
        }
    

    switch (select_field)
    {
    case 1:
        if (select_dir == 1)
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (strcmp(pcurrent->name_device, psave->name_device) < 0) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        else {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (strcmp(pcurrent->name_device, psave->name_device) > 0) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        break;

    case 2:

        if (select_dir == 1)
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->input > psave->input) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        else
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->input < psave->input) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        break;

    case 3:
        if (select_dir == 1)
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->kf_rlx_sin > psave->kf_rlx_sin) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        else
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->kf_rlx_sin < psave->kf_rlx_sin) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        break;

    case 4:

        if (select_dir == 1)
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->inp_res > psave->inp_res) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        else
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (pcurrent->inp_res < psave->inp_res) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        break;

    case 5:

        if (select_dir == 1)
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (select_dir ^ (pcurrent->amt_ch > psave->amt_ch)) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
        }
        else
        {
            for (bool go = true; go; ) {
                go = false;
                psave = pswap = head;
                pcurrent = head->next;

                while (pcurrent != NULL) {
                    if (select_dir ^ (pcurrent->amt_ch < psave->amt_ch)) {
                        if (pswap == psave)
                            head = pcurrent;
                        else
                            pswap->next = pcurrent;

                        psave->next = pcurrent->next;
                        pcurrent->next = psave;

                        pswap2 = psave, psave = pcurrent, pcurrent = pswap2;
                        go = true;
                    }
                    pswap = psave;
                    psave = psave->next;
                    pcurrent = pcurrent->next;
                }
            }
            break;
        }
    }
    pcurrent = head;
    while (getchar() != '\n') continue;
    printf("Сортировка завершена\n");
    Table(head, count);
    return head;
    }