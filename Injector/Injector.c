//
//  Injector.c
//  Injector
//
//  Created by MusiSmo on 1/9/18.
//  Copyright (c) 2018 InsanelyMac. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t Injector_start(kmod_info_t * ki, void *d);
kern_return_t Injector_stop(kmod_info_t *ki, void *d);

kern_return_t Injector_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t Injector_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
