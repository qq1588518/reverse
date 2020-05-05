//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol BTBaseSectionDataDelegate;

@interface BTBaseSectionData : MMObject
{
    double _sectionWidth;
    id <BTBaseSectionDataDelegate> _delegate;
}

+ (_Bool)isFunctionalSecionType:(unsigned long long)arg1;
@property(nonatomic) __weak id <BTBaseSectionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double sectionWidth; // @synthesize sectionWidth=_sectionWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sectionType;
@property(readonly, nonatomic) double viewHeight;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (id)initWithSectionWidth:(double)arg1;

@end

