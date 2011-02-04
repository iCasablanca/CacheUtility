# ABOUT

Simple cache implementation for iPhone and iPad using NSUserDefaults

# HOW TO USE

Copy files from CacheUtilitySource into your project and import
<pre>
#import "CacheUtil.h" 
</pre>

### Cache item
<pre>
[CacheUtil cacheItems:YOUR_STRING for:YOUR_REFERENCE_KEY];
</pre>

### Retrievi cached item
<pre>
[CacheUtil cachedItemsFor:YOUR_REFERENCE_KEY];
</pre>

### Remove item from cache
<pre>
[CacheUtil removeCacheItem:YOUR_KEY_REFERENCE];
</pre>

# Tips
You can use CacheUtility to cache JSon or Xml url item

# FUTURE

Implement image cache

# YOU
Fork and enjoy
