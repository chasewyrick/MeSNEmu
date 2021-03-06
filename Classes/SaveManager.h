#import <Foundation/Foundation.h>

@interface SaveManager : NSObject

+ (NSString*)legacy_pathForRunningStates;
+ (NSString*)legacy_pathForSaveStates;

+ (NSString*)pathForSaveOfROMName:(NSString*)romFileName slot:(int)slot;
+ (BOOL)hasStateForROMNamed:(NSString*)romFileName slot:(int)slot;

+ (void)saveRunningStateForROMNamed:(NSString*)romFileName;
+ (void)loadRunningStateForROMNamed:(NSString*)romFileName;

+ (void)saveStateForROMNamed:(NSString*)romFileName slot:(int)slot;
+ (void)loadStateForROMNamed:(NSString*)romFileName slot:(int)slot;

@end
