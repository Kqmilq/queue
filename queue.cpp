#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = { 0 };
int queue_index = 0;
int queue_zero =0;

int isQueueEmpty(void)
{
    return (queue_index == 0) ? 1 : 0;
}

int isQueueFull(void)
{
    return (queue_index == (QUEUE_SIZE)) ? 1 : 0;
}

int Pop(void)
{
    if (!isQueueEmpty())
    {
        queue_zero++;
        queue_index--;
        return queue_table[queue_zero - 1];
    }

    return queue_table[0];
}

int First(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[queue_zero];
    }

    return queue_table[0];
}

void Push(int val)
{
    if (!isQueueFull())
    {
        queue_table[queue_index] = val;
        queue_index++;
        if (queue_zero != 0) {
            queue_zero--;
        }
    }
}//
// Created by Kamil on 17.05.2024.
//
