#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef u_int8_t tcp_seq;

struct tcphdr{
    u_int8_t btcp_sport;
    u_int8_t btcp_dport;
    tcp_seq btcp_seq; 
    tcp_seq btcp_ack; 
    u_int8_t data_off;
    u_int8_t win_size;
    u_int8_t flag;

} BTcpHeader;

int main()
{
    printf("hello!\n");
    return 0;
}