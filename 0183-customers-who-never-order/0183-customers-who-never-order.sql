SELECT c1.name AS Customers
FROM Customers c1
WHERE c1.id NOT IN (
    SELECT c2.id
    FROM Customers c2
    JOIN Orders o
        ON c2.id = o.customerId
);