//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNAspectUtil : NSObject
{
}

+ (void)removeToken:(id)arg1;
+ (id)containerForClass:(Class)arg1 selector:(SEL)arg2;
+ (id)containers;
+ (void)rnaspect_remove:(id)arg1;
+ (id)rnaspect_hookSelector:(SEL)arg1 class:(Class)arg2 withOptions:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;

@end

