/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSSet, NSString;

@interface MBDomain : NSObject
{
    NSString *_name;
    NSString *_rootPath;
    NSSet *_relativePathsToBackupAndRestore;
    NSSet *_relativePathsNotToBackup;
    NSSet *_relativePathsNotToBackupToDrive;
    NSSet *_relativePathsNotToBackupToService;
    NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet *_relativePathsToRestoreOnly;
    NSSet *_relativePathsOfSystemFilesToAlwaysRestore;
    NSSet *_relativePathsNotToRestore;
    NSSet *_relativePathsNotToMigrate;
    NSSet *_relativePathsNotToRestoreToIPods;
    NSSet *_relativePathsToMoveAsideOnRestore;
    NSSet *_relativePathsToBackgroundRestore;
    NSDictionary *_relativePathAggregateDictionaryGroups;
    NSDictionary *_relativePathDomainRedirects;
    BOOL _shouldDigest;
}

+ (BOOL)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (void)_loadSystemDomains;
+ (id)systemDomains;
+ (id)systemDomainsByName;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsVersion;
+ (double)systemDomainsMaxSupportedVersion;
+ (BOOL)isAppName:(id)arg1;
+ (BOOL)isAppPlaceholderName:(id)arg1;
+ (id)bundleIDWithName:(id)arg1;
+ (id)nameWithAppBundleID:(id)arg1;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (id)appDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)appPlaceholderDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)uninstalledAppDomainWithBundleID:(id)arg1;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDomain:(id)arg1;
- (int)compare:(id)arg1;
- (unsigned int)hash;
- (id)description;
@property(readonly, nonatomic) NSSet *relativePathsToBackup;
@property(readonly, nonatomic) NSSet *relativePathsToRestore;
@property(readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
@property(readonly, nonatomic, getter=isPlaceholderAppDomain) BOOL placeholderAppDomain;
@property(readonly, nonatomic, getter=isUninstalledAppDomain) BOOL installedAppDomain;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(nonatomic) BOOL shouldDigest; // @synthesize shouldDigest=_shouldDigest;
@property(retain, nonatomic) NSDictionary *relativePathDomainRedirects; // @synthesize relativePathDomainRedirects=_relativePathDomainRedirects;
@property(retain, nonatomic) NSDictionary *relativePathAggregateDictionaryGroups; // @synthesize relativePathAggregateDictionaryGroups=_relativePathAggregateDictionaryGroups;
@property(retain, nonatomic) NSSet *relativePathsToBackgroundRestore; // @synthesize relativePathsToBackgroundRestore=_relativePathsToBackgroundRestore;
@property(retain, nonatomic) NSSet *relativePathsToMoveAsideOnRestore; // @synthesize relativePathsToMoveAsideOnRestore=_relativePathsToMoveAsideOnRestore;
@property(retain, nonatomic) NSSet *relativePathsNotToRestoreToIPods; // @synthesize relativePathsNotToRestoreToIPods=_relativePathsNotToRestoreToIPods;
@property(retain, nonatomic) NSSet *relativePathsNotToMigrate; // @synthesize relativePathsNotToMigrate=_relativePathsNotToMigrate;
@property(retain, nonatomic) NSSet *relativePathsNotToRestore; // @synthesize relativePathsNotToRestore=_relativePathsNotToRestore;
@property(retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRestore; // @synthesize relativePathsOfSystemFilesToAlwaysRestore=_relativePathsOfSystemFilesToAlwaysRestore;
@property(retain, nonatomic) NSSet *relativePathsToRestoreOnly; // @synthesize relativePathsToRestoreOnly=_relativePathsToRestoreOnly;
@property(retain, nonatomic) NSSet *relativePathsNotToCheckIfModifiedDuringBackup; // @synthesize relativePathsNotToCheckIfModifiedDuringBackup=_relativePathsNotToCheckIfModifiedDuringBackup;
@property(retain, nonatomic) NSSet *relativePathsNotToBackupToService; // @synthesize relativePathsNotToBackupToService=_relativePathsNotToBackupToService;
@property(retain, nonatomic) NSSet *relativePathsNotToBackupToDrive; // @synthesize relativePathsNotToBackupToDrive=_relativePathsNotToBackupToDrive;
@property(retain, nonatomic) NSSet *relativePathsNotToBackup; // @synthesize relativePathsNotToBackup=_relativePathsNotToBackup;
@property(retain, nonatomic) NSSet *relativePathsToBackupAndRestore; // @synthesize relativePathsToBackupAndRestore=_relativePathsToBackupAndRestore;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end
