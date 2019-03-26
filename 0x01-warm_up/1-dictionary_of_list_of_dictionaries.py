#!/usr/bin/python3
'''A Python script to export data in JSON format'''

import json
import requests
import sys

if __name__ == "__main__":
    req_user = requests.get('https://jsonplaceholder.typicode.com/users')
    users = req_user.json()
    for user in users:
        user_id = user.get('id')
        user_name = user.get('name')
        username = user.get('username')

    req_tasks = requests.get('https://jsonplaceholder.typicode.com/todos')
    todo_list = req_tasks.json()
    json_file = "todo_all_employees" + ".json"
    data = {}
    list = []
    with open(json_file, 'w') as jsonfile:
        for task in todo_list:
            list.append({task.get('userId'):
                         [{"username": task.get('username'),
                           "task": task.get('title'),
                           "completed": task.get('completed')}]})
        data[user_id] = list
        json.dump(data, jsonfile)
