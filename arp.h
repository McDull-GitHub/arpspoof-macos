#ifndef _ARP_H_
#define _ARP_H_
int	arp_cache_lookup(in_addr_t ip, struct ether_addr *ether, const char* linf);
#endif 
