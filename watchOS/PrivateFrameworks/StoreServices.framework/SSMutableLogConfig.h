//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSLogConfig.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSMutableLogConfig : SSLogConfig <NSCopying>
{
}


// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) unsigned int environment; // @dynamic environment;
@property(copy, nonatomic) NSString *outputDirectory; // @dynamic outputDirectory;
@property(copy, nonatomic) NSString *outputFilename; // @dynamic outputFilename;
@property(copy, nonatomic) NSString *subsystem; // @dynamic subsystem;
@property(nonatomic) _Bool writeToDisk; // @dynamic writeToDisk;
@end

