void LinkedList::Reverse()
{
    Node*p=first;
    Node *q = p;
    int *A;
    A = new int[count()];
    int i;
    while (p)
    {
        A[i] = q->data;
        q = p->next;
        i++;
    }
    q = p;
    i--;
    while (p)
    {
        p->data = A[i];
        p = p->next;
        i--;
    }
}