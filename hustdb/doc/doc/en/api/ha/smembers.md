## smembers ##

**Interface:** `/smembers`

**Method:** `GET`

**Parameter:** 

*  **peer** (Required)  
This represents the indexes of backend servers. See more details in [peer_count](peer_count.md)  
*  **tb** (Required)
*  **offset** (Required)  
*  **size** (Required)  
*  **start** (Optional)  
*  **end** (Optional)    
*  **noval** (Optional)   
*  **async** (Optional)    

This interface is a proxy interface for `/hustdb/smembers`. See more details in [here](../hustdb/hustdb/smembers.md).  

**Sample:**

Please refer to test script for more details:  
Script path: `hustdb/ha/nginx/test/fetch.py`

[Previous](../ha.md)

[Home](../../index.md)