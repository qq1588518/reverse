//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QDBStatement : NSObject
{
    void *_statement;
    NSString *_query;
    _Bool _inUse;
}

@property _Bool inUse; // @synthesize inUse=_inUse;
@property void *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)reset;
- (void)close;
- (void)dealloc;

@end

