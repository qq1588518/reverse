//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface SignGiftData : MMObject <PBCoding>
{
    unsigned int state;
    unsigned int width;
    unsigned int height;
    NSString *iconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_iconUrl;
@property(nonatomic) unsigned int height; // @synthesize height;
@property(nonatomic) unsigned int width; // @synthesize width;
@property(nonatomic) unsigned int state; // @synthesize state;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

