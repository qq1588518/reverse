//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCResponse.h"

@class NSNumber, NSString, SDLTriggerSource;

@interface SDLPerformInteractionResponse : SDLRPCResponse
{
}

@property(retain) SDLTriggerSource *triggerSource;
@property(retain) NSString *manualTextEntry;
@property(retain) NSNumber *choiceID;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

