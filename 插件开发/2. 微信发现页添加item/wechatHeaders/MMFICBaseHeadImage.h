//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FICEntity-Protocol.h"

@class NSString, UIImage;

@interface MMFICBaseHeadImage : NSObject <FICEntity>
{
    NSString *_usrName;
    NSString *_sourceImgUrl;
    NSString *_entityUUID;
    NSString *_sourceImageUUID;
    unsigned int _eliminationFactor;
    NSString *_formatName;
}

+ (id)genFICEntity:(id)arg1;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(nonatomic) unsigned int eliminationFactor; // @synthesize eliminationFactor=_eliminationFactor;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
- (void).cxx_destruct;
- (CDUnknownBlockType)drawingBlockForImage:(id)arg1;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *sourceImageUUID;
@property(readonly, nonatomic) NSString *entityUUID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

