Here's the breakdown of how each data structure is used:
---

### **1. `vector<product>` (Dynamic Array)**
```cpp
vector<product> products = {
    {101, "Laptop", "Electronic"},
    {102, "Smartphone", "Electronic"},
    {103, "Coffee Maker", "Kitchen"},
    {104, "Blender", "Kitchen"},
    {105, "Desk Lamp", "Home"}};
```
- **Use:** Stores a list of products with their `productId`, `name`, and `category`.
- **Why vector?** 
  - Provides **fast random access** (O(1) complexity).
  - Can dynamically grow or shrink in size.
  - Iteration is efficient.

---

### **2. `deque<string>` (Double-ended Queue)**
```cpp
deque<string> recenCustomer = {"C001", "C002", "C003"};
recenCustomer.push_back("C004");
recenCustomer.push_front("C005");
```
- **Use:** Stores recent customers' IDs.
- **Why deque?**
  - Efficient insertion and deletion from both **front and back** (O(1)).
  - Unlike `vector`, inserting at the front is **efficient**.

---

### **3. `list<Order>` (Doubly Linked List)**
```cpp
list<Order> orderHistory;

orderHistory.push_back({1, 101, 10, "C001", time(0)});
orderHistory.push_back({2, 102, 12, "C002", time(0)});
orderHistory.push_back({3, 103, 2, "C003", time(0)});
```
- **Use:** Stores order history with `orderId`, `productId`, `quantity`, `customerId`, and `orderDate`.
- **Why list?**
  - Efficient **insertion and deletion** from **anywhere** (O(1) complexity).
  - Unlike `vector`, inserting or removing an order **does not require shifting elements**.

---

### **4. `set<string>` (Ordered Set - Unique & Sorted)**
```cpp
set<string> categories;

for (const auto &product : products)
{
    categories.insert(product.category);
}
```
- **Use:** Stores unique product categories.
- **Why set?**
  - **Automatically sorts** elements.
  - **Prevents duplicates** (only unique categories).
  - Searching and inserting are **O(log N)** due to the **binary search tree (BST)** structure.

---

### **5. `map<int, int>` (Key-Value Pair - Ordered)**
```cpp
map<int, int> productStock = {
    {101, 10},
    {102, 11},
    {103, 20},
    {104, 14},
    {105, 30},
};
```
- **Use:** Maps `productId` to its stock count.
- **Why map?**
  - **Ordered storage** based on `productId`.
  - Fast search and insertion **O(log N)**.
  - Prevents duplicate keys.

---

### **6. `multimap<string, Order>` (Key-Value Pair - Allows Duplicate Keys)**
```cpp
multimap<string, Order> customerOrders;
for (const auto &order : orderHistory)
{
    customerOrders.insert({order.customerId, order});
}
```
- **Use:** Stores multiple orders for each customer (`customerId` → `Order`).
- **Why multimap?**
  - Allows **duplicate keys** (multiple orders per customer).
  - Maintains order of insertion.

---

### **7. `unordered_map<string, string>` (Hash Table - Key-Value Pair, Unordered)**
```cpp
unordered_map<string, string> customerData{
    {"C001", "Alice"},
    {"C002", "Raj"},
    {"C003", "Sidama"},
    {"C004", "Kalu"},
    {"C005", "Kari"},
};
```
- **Use:** Stores customer names with their `customerId` as the key.
- **Why unordered_map?**
  - **Faster lookup (O(1) average case) due to hash table**.
  - Unlike `map`, it does not maintain order.

---

### **8. `unordered_set<int>` (Hash Table - Unique & Unordered)**
```cpp
unordered_set<int> uniqueProductIds;
for (const product &product : products)
{
    uniqueProductIds.insert(product.productId);
}
```
- **Use:** Stores unique product IDs.
- **Why unordered_set?**
  - **Ensures uniqueness**.
  - Faster operations **(O(1) average time)** compared to `set` (O(log N)).

---

### **Final Summary**
| Data Structure | Used For | Why? |
|---------------|---------|------|
| `vector<product>` | Stores products | Fast random access, dynamic growth |
| `deque<string>` | Stores recent customers | Fast insert/remove at both ends |
| `list<Order>` | Stores order history | Efficient insert/remove anywhere |
| `set<string>` | Stores unique product categories | Sorted and unique elements |
| `map<int, int>` | Stores product stock | Ordered key-value pair |
| `multimap<string, Order>` | Stores multiple orders per customer | Allows duplicate keys |
| `unordered_map<string, string>` | Stores customer data (ID → Name) | Fast lookup (O(1) average) |
| `unordered_set<int>` | Stores unique product IDs | Ensures uniqueness with fast lookup |

---
### **Key Takeaways**
- **Use `vector` when you need dynamic array-like behavior.**
- **Use `deque` for efficient insertion/removal from both ends.**
- **Use `list` when frequent insertions/deletions are needed anywhere.**
- **Use `set` when you need unique, sorted elements.**
- **Use `map` for ordered key-value pairs.**
- **Use `multimap` when duplicate keys are required.**
- **Use `unordered_map` for fast key-value lookups.**
- **Use `unordered_set` for unique, unordered values with fast lookup.**

