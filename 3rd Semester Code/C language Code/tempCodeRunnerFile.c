= ptr1 ;
                temp->data = ptr1->data + ptr2->data;
                adder(&head3 , &ptr3 , &temp);
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;