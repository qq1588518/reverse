//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString, SDLImage, SDLSoftButtonType, SDLSystemAction;

@interface SDLSoftButton : SDLRPCStruct
{
}

@property(retain) SDLSystemAction *systemAction;
@property(retain) NSNumber *softButtonID;
@property(retain) NSNumber *isHighlighted;
@property(retain) SDLImage *image;
@property(retain) NSString *text;
@property(retain) SDLSoftButtonType *type;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

