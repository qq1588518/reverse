//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, SDLCharacterSet, SDLTextFieldName;

@interface SDLTextField : SDLRPCStruct
{
}

@property(retain) NSNumber *rows;
@property(retain) NSNumber *width;
@property(retain) SDLCharacterSet *characterSet;
@property(retain) SDLTextFieldName *name;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

