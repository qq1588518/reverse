//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSMutableArray, NSNumber, SDLDisplayType, SDLScreenParams;

@interface SDLDisplayCapabilities : SDLRPCStruct
{
}

@property(retain) NSNumber *numCustomPresetsAvailable;
@property(retain) SDLScreenParams *screenParams;
@property(retain) NSMutableArray *templatesAvailable;
@property(retain) NSNumber *graphicSupported;
@property(retain) NSMutableArray *mediaClockFormats;
@property(retain) NSMutableArray *imageFields;
@property(retain) NSMutableArray *textFields;
@property(retain) SDLDisplayType *displayType;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

